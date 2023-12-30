use std::io;

fn main() {
    let mut num = String::new();
    io::stdin().read_line(&mut num).unwrap();
    let mut x: i32 = num.trim().parse().unwrap();

    let mut num = String::new();
    io::stdin().read_line(&mut num).unwrap();
    //let y: i32 = num.trim().parse().unwrap();
    x += num.trim().parse::<i32>().unwrap();
    //let y: i32 = 5;
    println!("X = {}", x);
}