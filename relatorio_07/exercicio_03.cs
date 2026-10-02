using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System;
using System.Collections.Generic;

public class Grimorio
{
    public string FeiticoFavorito { get; set; } = "Nenhum";

    public void Abrir()
    {
        Console.WriteLine($"\nGrimorio aberto. Feitico favorito: {FeiticoFavorito}");
    }
}

public class Companheiro
{
    public string Nome { get; private set; }
    public string Funcao { get; private set; }

    public Companheiro(string nome, string funcao)
    {
        this.Nome = nome;
        this.Funcao = funcao;
    }

    public void Apresentar()
    {
        Console.WriteLine($"Nome: {Nome} | Funcao: {Funcao}");
    }
}



public class Maga
{
    public string Nome { get; private set; }
    public Grimorio GrimorioPessoal { get; private set; }
    private List<Companheiro> _grupo;

    public Maga(string nome)
    {
        this.Nome = nome;
        this.GrimorioPessoal = new Grimorio();
        this._grupo = new List<Companheiro>();
    }
    public void Recrutar(Companheiro c)
    {
        this._grupo.Add(c);
    }

    public void MostrarGrupo()
    {
        Console.WriteLine($"\nGrupo de {Nome}:");
        foreach (var c in _grupo)
        {
            c.Apresentar();
        }
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        Companheiro c1 = new Companheiro("Companheiro 1", "Funcao 1");
        Companheiro c2 = new Companheiro("Companheiro 2", "Funcao 2");
        Maga maga1 = new Maga("Maga 1");

        maga1.Recrutar(c1);
        maga1.Recrutar(c2);
        maga1.GrimorioPessoal.FeiticoFavorito = "Feitico 1";

        maga1.MostrarGrupo();
        maga1.GrimorioPessoal.Abrir();

        //Composição: o Grimorio é criado dentro da Maga fazendo parte dela.//
		//Agregação: os Companheiros são criados fora da Maga e depois colocados no grupo dela.//

    }
}
