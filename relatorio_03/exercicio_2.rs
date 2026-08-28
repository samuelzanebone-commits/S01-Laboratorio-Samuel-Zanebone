use std::io;

fn acertou_o_alvo(palpite: i32, numero_secreto: i32) -> bool {
    let mut diferenca = palpite - numero_secreto;
    if diferenca < 0 {
        diferenca = diferenca * -1;
    }

    if diferenca <= 5 {
        return true;
    } else {
        return false;
    }
}

fn main() {
    let numero_secreto: i32 = 42;

    loop {
        let mut entrada = String::new();

        println!("Digite seu palpite:");
        io::stdin().read_line(&mut entrada).expect("Erro ao ler");

      
        let texto_limpo = entrada.trim();
        let palpite: i32 = texto_limpo.parse().unwrap_or(0);

        let acertou = acertou_o_alvo(palpite, numero_secreto);

        if acertou == true {
            let mut distancia = palpite - numero_secreto;
            if distancia < 0 {
                distancia = distancia * -1;
            }

            println!("Parabens, voce acertou o alvo!");
            println!("Voce ficou a apenas {} unidade(s) do numero secreto ({}).", distancia, numero_secreto);
            break;
        } else {
            println!("Voce passou longe! Tente novamente.");
        }
    }
}
