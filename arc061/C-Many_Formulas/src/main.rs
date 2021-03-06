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
        S : String,
    );

//    let S: String = "a".to_string();
    let s = S.chars().collect::<Vec<_>>();
    let bit = 1 << s.len() - 1;
    let mut ans = 0;
    // pattern inserting plus
    for i in 0..bit {
        let mut temp: i64 = 0;
        // calc
        for j in 0..s.len() {
            let sj = s[j] as i64 - 48;

            if i >> j & 1 == 1 {
//                print!("{}+", sj);
                temp = temp*10+sj;
                ans += temp;
                temp = 0;
            } else {
//                print!("{}", sj);
                temp = temp * 10 + sj;
            }
        }
        ans += temp;
//        print!(" {}",ans);
//        println!();
    }
    println!("{}", ans);
}
