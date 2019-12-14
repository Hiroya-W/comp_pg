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
        D : i32, // mondai suu
        G : i32, // soudou tokuten
        arr : [(i32, i32); D],
    );

    let mut ans =100000;
    let arr: Vec<(i32, i32)> = arr;
    for mask in 0..(1 << D) {
        let mut sum = 0;
        let mut pcount = 0;
        let mut rest_max = 0;
        for i in 0..D {
            // zenbu toku
            if mask >> i & 1 == 1 {
                sum += arr[i as usize].0 * 100 * (i as i32 + 1) + arr[i as usize].1;
                pcount += arr[i as usize].0;
            } else {
                rest_max = i;
            }
        }
        if sum < G {
            let s1 = 100 * (rest_max as i32 + 1); // max point
            let need = (G - sum + s1 - 1) / s1;
            if need >= arr[rest_max as usize].0 {
                continue;
            }
            pcount += need;
        }
        ans = if pcount < ans { pcount } else { ans };
    }
    println!("{}",ans);
}
