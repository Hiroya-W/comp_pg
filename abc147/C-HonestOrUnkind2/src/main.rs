// https://qiita.com/tanakh/items/0ba42c7ca36cd29d0ac8
macro_rules! input {
    (source = $s:expr, $($r:tt)*) => {
        let mut iter = $s.split_whitespace();
        let mut next = || { iter.next().unwrap() };
        input_inner!{next, $($r)*}
    };
    ($($r:tt)*) => {
        let stdin = std::io::stdin();
        let mut bytes = std::io::Read::bytes(std::io::BufReader::new(stdin.lock()));
        let mut next = move || -> String{
            bytes
                .by_ref()
                .map(|r|r.unwrap() as char)
                .skip_while(|c|c.is_whitespace())
                .take_while(|c|!c.is_whitespace())
                .collect()
        };
        input_inner!{next, $($r)*}
    };
}

macro_rules! input_inner {
    ($next:expr) => {};
    ($next:expr, ) => {};

    ($next:expr, $var:ident : $t:tt $($r:tt)*) => {
        let $var = read_value!($next, $t);
        input_inner!{$next $($r)*}
    };
}

macro_rules! read_value {
    ($next:expr, ( $($t:tt),* )) => {
        ( $(read_value!($next, $t)),* )
    };

    ($next:expr, [ $t:tt ; $len:expr ]) => {
        (0..$len).map(|_| read_value!($next, $t)).collect::<Vec<_>>()
    };

    ($next:expr, chars) => {
        read_value!($next, String).chars().collect::<Vec<char>>()
    };

    ($next:expr, usize1) => {
        read_value!($next, usize) - 1
    };

    // https://atcoder.jp/contests/abc147/submissions/8921445
    // 3
    // 1 2
    // 1 3
    // 1 4
    // のようなタイプ
    ($next:expr, [ $t:tt ]) => {{
        let len = read_value!($next, usize);
        (0..len).map(|_| read_value!($next, $t)).collect::<Vec<_>>()
    }};

    ($next:expr, $t:ty) => {
        $next().parse::<$t>().expect("Parse error")
    };
}

fn main() {
    input!(
        N : i32,
        arr : [[(i32,i32)];N]
    );

    let mut ans = 0;
    for mask in 0..1 << N {
        let mut ok = true;
        for i in 0..N {
            if mask >> i & 1 == 1 {
                for j in 0..arr[i as usize].len() {
                    let p = arr[i as usize][j as usize];
                    // check contradiction
                    if mask >> (p.0 - 1) & 1 ^ p.1 == 1 {
                        ok = false;
                    }
                }
            }
        }
        if ok && (ans as u32).count_ones() < (mask as u32).count_ones() {
            ans = mask;
        }
    }
    println!("{}", ans.count_ones());
}
