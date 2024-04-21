// Matematica 
// As variaveis trabalham em espaço alocado na memoria, caso queira um resultado com mais digitos
// Deve-se alocar mais espaço sendo eles 16 32 64 128 ou sem limite 'size'

fn main(){

    // Dependendo da situação pode-se querer resultados mais precisos, e quem define isso é o quanto de memoria foi alocado a variavel
    // Uma variavel de 32bits vai ter uma precisão de até 8 digitos
    let x: f32 = 1.111111111111111;
    println!("f32 : {}",x + 0.111111111111111);
    // Uma variavel de 64bits vai ter uma precisão de até 17 digitos
    let y: f64 = 1.111111111111111;
    println!("f64 : {}",y + 0.111111111111111);


    // Operadores Matematicos
     let mut z1: u32 = 5;
     let z2: u32 = 4;
     println!("5 + 4 = {}",z1 + z2);
     println!("5 - 4 = {}",z1 - z2);
     println!("5 * 4 = {}",z1 * z2);
     println!("5 / 4 = {}",z1 / z2);
     println!("5 % 4 = {}",z1 % z2);
    
    // Incremento / Decremento
    // Considerando que a variavel seja mutavel para fazer o incremento/decremento de valores utiliza-se += ou -= 

    z1 += 1;
    z1 -= 1;

}