using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using System;
using System.Collections.Generic;

public class EntidadeCosmica
{
    public string Nome { get; private set; }
    public string Origem { get; set; } = "Desconhecida";

    public EntidadeCosmica(string nome)
    {
        this.Nome = nome;
    }

    public virtual void Manifestar()
    {
        Console.WriteLine($"\nEntidade: {Nome}");

        if (Origem != "Desconhecida")
        {
            Console.WriteLine($"Origem: {Origem}");
        }
    }
}

public class Profundo : EntidadeCosmica
{
    public Profundo(string nome) : base(nome)
    {
    }
    public override void Manifestar()
    {
        Console.WriteLine($"\nEntidade: {Nome}");
        Console.WriteLine("Manifestacao tipo 1.");
    }
}

public class MiGo : EntidadeCosmica
{
    public MiGo(string nome) : base(nome)
    {
    }
    public override void Manifestar()
    {
        base.Manifestar();
        Console.WriteLine("Manifestacao tipo 2.");
    }
}
public class Pesquisador
{
    public string Nome { get; private set; }
    private List<EntidadeCosmica> _catalogo;

    public Pesquisador(string nome)
    {
        this.Nome = nome;
        this._catalogo = new List<EntidadeCosmica>();
    }
    public void Catalogar(EntidadeCosmica e)
    {
        this._catalogo.Add(e);
    }
    public void LerCatalogo()
    {
        Console.WriteLine($"\nCatalogo de {Nome}:");
        foreach (var entidade in _catalogo)
        {
            entidade.Manifestar();
        }
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        EntidadeCosmica e1 = new EntidadeCosmica("Entidade 1");
        Profundo e2 = new Profundo("Entidade 2");
        MiGo e3 = new MiGo("Entidade 3");

        e1.Origem = "Origem 1";
        e3.Origem = "Origem 3";
        Pesquisador p1 = new Pesquisador("Pesquisador 1");

        p1.Catalogar(e1);
        p1.Catalogar(e2);
        p1.Catalogar(e3);

        p1.LerCatalogo();
    }
}
