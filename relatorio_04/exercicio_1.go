package main

import "fmt"

func ValidarCodigoRastreio(codigo string) (bool, string) {

    tamanho := 0
    for tamanho < len(codigo) {
        tamanho++
    }

    if tamanho == 10 {
        return true, "Código de rastreio registrado no sistema!"
    }


    return false, "Erro: O código de rastreio deve ter exatamente 10 caracteres."
}

func main() {
    var codigo string
    valido := false

    
    for valido == false {
        fmt.Print("Digite o código de rastreio: ")
        fmt.Scanln(&codigo)

        status, mensagem := ValidarCodigoRastreio(codigo)
        valido = status

        fmt.Println(mensagem)
    }

    
}
