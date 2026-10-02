using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System;
using System.Collections.Generic;


public class Pokemon
{
    public string Especie { get; private set; }
    public int Nivel { get; private set; }

    public Pokemon(string especie, int nivel)
    {
        this.Especie = especie;
        this.Nivel = nivel;
    }

    public virtual void Atacar()
    {
        Console.WriteLine($"\n{Especie} (Nivel {Nivel}) usou ataque normal.");
    }
}
public class TipoPlanta : Pokemon
{
    public TipoPlanta(string especie, int nivel) : base(especie, nivel)
    {
    }

    public override void Atacar()
    {
        Console.WriteLine($"\n{Especie} (Nivel {Nivel}) usou ataque de planta.");
    }
}



public class TipoEletrico : Pokemon
{
    public TipoEletrico(string especie, int nivel) : base(especie, nivel)
    {
    }


    public override void Atacar()
    {
        base.Atacar();
        Console.WriteLine($"{Especie} soltou uma descarga.");
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        
        List<Pokemon> lista = new List<Pokemon>();

        lista.Add(new Pokemon("Pokemon 1", 5));
        lista.Add(new TipoPlanta("Pokemon 2", 10));
        lista.Add(new TipoEletrico("Pokemon 3", 15));

        foreach (var p in lista)
        {
            p.Atacar();
        }
    }
}
