use std::io;

fn calcular_pontuacao(prova1: f64, prova2: f64, redacao: f64) -> f64 {
 
    let npt = (prova1 + prova2) / 2.0;
    
   
    let pf = (npt * 0.6) + (redacao * 0.4);

    if pf >= 60.0 {
        println!("Parabens! Candidato aprovado no processo seletivo.");
    } else {
        println!("Infelizmente o candidato nao atingiu a pontuacao minima de aprovacao.");
    }


    pf
}

fn main() {
  
  
    let mut entrada1 = String::new();
    println!("Digite a nota da Prova Teorica 1:");
    io::stdin().read_line(&mut entrada1).expect("Erro ");
    let texto1 = entrada1.trim();
    let prova1: f64 = texto1.parse().unwrap_or(0.0);


  
    let mut entrada2 = String::new();
    println!("Digite a nota da Prova Teorica 2:");
    io::stdin().read_line(&mut entrada2).expect("Erro");
    let texto2 = entrada2.trim();
    let prova2: f64 = texto2.parse().unwrap_or(0.0);

    
    let mut entrada3 = String::new();
    println!("Digite a nota da Redacao:");
    io::stdin().read_line(&mut entrada3).expect("Erro ");
    let texto3 = entrada3.trim();
    let redacao: f64 = texto3.parse().unwrap_or(0.0);

    
    let resultado = calcular_pontuacao(prova1, prova2, redacao);
    


  
    println!("Pontuacao Final: {}", resultado);
}
