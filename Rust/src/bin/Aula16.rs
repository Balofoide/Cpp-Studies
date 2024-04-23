

fn main(){
    // Casting
    // É possivel converter tipos de dados, utilizando casting como "as"
    let int_u8: u8 = 5;
    let int2_u8: u8 = 4;


    // aqui está sendo tratada uma variavel u8 como u32 duas vezes
    // e o resultado está sendo somado em uma variavel u32
    let int3_u32: u32= (int_u8 as u32) + (int2_u8 as u32);

    println!("Variavel Convertida para u32: {}",int3_u32);

}