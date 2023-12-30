use std::io;
const PI: f64 = 3.14159;

fn main(){
    let mut line = String::new();
    io::stdin().read_line(&mut line).unwrap();

    let radius: f64 = line.trim().parse().unwrap();

    println!("A={:.4}", PI*radius*radius );
}