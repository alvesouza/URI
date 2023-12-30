use std::io;
use std::str::Split;

fn xor( a: i32, b: i32 )
{
    println!("{}", a ^ b );
}

fn main(){

    for input in io::stdin().lines()
    {
        //let inputs: Vec<&str> = input.unwrap().split( " " ).collect();
        let unwrap = input.unwrap(); 
        let inputs: Split<&str> = unwrap.split( " " );
        let vecinput: Vec<&str> = inputs.collect();
        //println!("{}", input.unwrap() );
        
        match vecinput.len(){
            2 => xor( vecinput[0].trim().parse().unwrap(),
            vecinput[1].trim().parse().unwrap(), ),
            _ => break,

        }      

    }      
}