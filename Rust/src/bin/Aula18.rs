// Vetores
// Vetores são comos arrays, mas eles são feitos para guardar varios tipos do mesmo dado

fn main(){

    let vetor_1: Vec<i32> = Vec::new();
    let mut vector_2 = vec![1,2,3,4];

    vector_2.push(5);

    println!("First Vector{}", vector_2[0]);

    let second: &i32 = &vector_2[1];

    match vector_2.get(1){

        Some(second) => println!("2nd : {}", second),
        Nome => println!("No 2nd Value"),
    }

    for i in &mut vector_2 {

        *i *= 2;
    }

    for i in &vector_2 {
        println!("{}",i);
    }

    println!("Vec Lenght {}",vector_2.len());
    println!("Pop : {:?}",vector_2.pop() );

}