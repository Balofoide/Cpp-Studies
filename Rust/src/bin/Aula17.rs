// ENUM enum é um metodo utilizado para criar tipos de dados

fn main(){
    // Aqui está sendo declarado um novo tipo de dado chamado Day
    // Nele está sendo passado os dias da semana
    enum Day {
        Segunda,
        Terca,
        Quarta,
        Quinta,
        Sexta,
        Sabado,
        Domingo
    }

    // Aqui está sendo implementado funções para os tipos de dados contidos em Day
    impl Day {

        fn is_weekend(&self) -> bool {
            match self {

                Day::Sabado | Day::Domingo => true,
                _ => false
            }
        }
    }

    // Aqui está sendo declarado uma variavel do tipo Day criado anteriormente
    // e o dado dela é igual ao Sabado que foi declarada anteriormente por ela 

    let today:Day = Day::Sabado;
        
    match today {
        Day::Segunda => println!("Segunda beira"),
        Day::Terca => println!("Terça beira"),
        Day::Quarta => println!("Quarta beira"),
        Day::Quinta => println!("Quinta beira"),
        Day::Sexta => println!("Sexta beira"),
        Day::Sabado => println!("Sabado"),
        Day::Domingo => println!("Domingão")
    }

    println!("Hoje é fim de semana ? : {}", today.is_weekend());
}