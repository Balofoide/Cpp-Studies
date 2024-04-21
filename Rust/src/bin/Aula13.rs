// Tupla
// Variavel com um conjunto de varios tipos de dados 

fn main(){
    // Uma tupla é definida passando todas as variaveis entre (), e passando seus valores em ordem dentro de ()
    let tupla: (u8, String, f64) = (21, "Balofoide".to_string(),20_000.00);

    // é possivel acessar esses valores diretamente
     println!("Nome {}", tupla.1);

    // ou atribuir-los a outra  variavel
     let(v1,_v2,_v3) = tupla;
     println!("Idade {}", v1);
}