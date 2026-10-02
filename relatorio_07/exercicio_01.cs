using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System;
using System.Collections.Generic;

public class CombatenteDeGondor
{
    public string Nome { get; private set; }
    public string Povo { get; private set; }
    public string Posto { get; private set; }
    public string Armamento { get; private set; } = "Desarmado";

    public CombatenteDeGondor(string nome, string povo, string posto)
    {
        this.Nome = nome;
        this.Povo = povo;
        this.Posto = posto;
    }

    public void Equipar(string arma)
    {
        this.Armamento = arma;
        Console.WriteLine($"{Nome} recebeu {Armamento}.");
    }

    public void ApresentarUnidade()
    {
        Console.WriteLine($"Nome: {Nome}");
        Console.WriteLine($"Povo: {Povo}");
        Console.WriteLine($"Posto: {Posto}");

        if (Armamento != "Desarmado")
        {
            Console.WriteLine($"Armamento: {Armamento}");
        }
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        CombatenteDeGondor c1 = new CombatenteDeGondor("Combatente 1", "Povo 1", "Posto 1");
        CombatenteDeGondor c2 = new CombatenteDeGondor("Combatente 2", "Povo 2", "Posto 2");
        CombatenteDeGondor c3 = new CombatenteDeGondor("Combatente 3", "Povo 3", "Posto 3");

        c1.Equipar("Espada");
        c2.Equipar("Faca");

        c1.ApresentarUnidade();
        c2.ApresentarUnidade();
        c3.ApresentarUnidade();

         //c3.Posto = "Posto 4";
        // Erro: HelloWorld.cs(51,13): error CS0272: The property or indexer `CombatenteDeGondor.Posto' cannot be used in this context because the set accessor is inaccessible
    }
}
