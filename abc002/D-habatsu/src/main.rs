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

    ($next:expr, $t:ty) => {
        $next().parse::<$t>().expect("Parse error")
    };
}

fn main() {
    input!(
        N : i32,
        M : i32,
        arr : [(i32,i32);M],
    );

    let arr: Vec<(i32, i32)> = arr;
    let mut cont: [[bool; 15]; 15] = [[false; 15]; 15];
    let mut ans:u32 =0;

    for p in arr.iter() {
        cont[p.0 as usize -1][p.1 as usize -1] = true;
        cont[p.1 as usize -1][p.0 as usize -1] = true;
    }

    for mask in 0..1 << N {
        let mut ok = true;
        for i in 0..N {
            for j in 0..N {
                if i == j{
                    continue;
                }
                if (mask >> i & 1) & (mask >> j & 1) == 1 {
                    if !cont[i as usize][j as usize]{
                        ok = false;
                    }
                }
            }
        }
        if ok && ans.count_ones() < (mask as u32).count_ones(){
            ans = mask as u32;
        }
    }
    println!("{}",ans.count_ones());
}