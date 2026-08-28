//acho que o slide estava errado, eu fiz para validar 7 caracteres, as 3 letras maiusculas e 4 numeros
//para bater com o caso de teste
use std::io;
fn validar_placa(placa: &str) -> bool {
    
    if placa.len() < 7 {
        return false;
    }
    
    let mut maiusculas = 0;
    let mut numeros = 0;
    for c in placa.chars() {
        if c.is_ascii_uppercase() {
            maiusculas = maiusculas + 1;
        }
        if c.is_numeric() {
            numeros = numeros + 1;
        }
    }
    
    if maiusculas >= 3 && numeros >= 4 {
        return true;
    } else {
        return false;
    }
}
fn main() {
    loop {
        let mut entrada = String::new();
        println!("Digite a placa do veiculo:");
        io::stdin().read_line(&mut entrada).expect("Erro ao ler");
        let placa = entrada.trim();
        if validar_placa(placa) {
            println!("Placa cadastrada no sistema!");
            break;
        } else {
            println!("Placa invalida. Tente novamente!");
        }
    }
}
