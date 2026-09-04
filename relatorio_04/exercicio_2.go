package main

import "fmt"

func main() {
    var t1, t2, t3 int

    fmt.Print("Digite as vendas do 1º trimestre: ")
    fmt.Scanln(&t1)
    fmt.Println()

    fmt.Print("Digite as vendas do 2º trimestre: ")
    fmt.Scanln(&t2)
    fmt.Println()

    fmt.Print("Digite as vendas do 3º trimestre: ")
    fmt.Scanln(&t3)
    fmt.Println()

    soma := t1 + t2 + t3


    if soma < 100 {
        fmt.Println("Meta mínima anual não atingida!")
        return
    }
    fmt.Printf("Total de vendas: %d unidades\n", soma)



    switch {
    case soma >= 250:
        fmt.Println("Classificação: Categoria Top Seller")
    case soma >= 180: 
        fmt.Println("Classificação: Categoria Sênior")
    default: 
        fmt.Println("Classificação: Categoria Pleno")
    }
}
