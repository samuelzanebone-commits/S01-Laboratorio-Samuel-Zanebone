package main

import "fmt"

func gerarEscalaPlantao(n int) {
	fmt.Println("--- Escala de Plantão Técnico ---")
	
	dia := 1
	for j := 1; j <= n; j++ {
		fmt.Printf("Plantão %d: Dia %d do mês\n", j, dia)
		dia = dia + 4
	}
}



func main() {
	var plantoes int

	fmt.Print("Digite a quantidade de plantões necessários: ")
	fmt.Scanln(&plantoes)
	fmt.Println()



	gerarEscalaPlantao(plantoes)
}
