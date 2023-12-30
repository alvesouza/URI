use std::io;

fn main(){
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let mut soma: i32 = input.trim().parse().unwrap();

    input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    soma += input.trim().parse::<i32>().unwrap();

    println!("SOMA = {}", soma);
}