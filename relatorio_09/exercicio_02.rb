class Instrumentista
    attr_reader :nome, :instrumento
  
    def initialize(nome, instrumento)
      @nome = nome
      @instrumento = instrumento
    end
  
    def interpretar(peca)
      raise NotImplementedError, "Metodo nao implementado"
    end
  end
  
  class Solista < Instrumentista
    def interpretar(peca)
      puts "#{nome} - #{instrumento} - #{peca}: conduz a melodia principal"
    end
  end
  
  class Acompanhador < Instrumentista
    def interpretar(peca)
      puts "#{nome} - #{instrumento} - #{peca}: acompanha o ritmo do solista"
    end
  end
  
  class Regente
    def initialize(nome)
      @nome = nome
      @orquestra = []
    end
  
    def convocar(instrumentista)
      @orquestra << instrumentista
    end
  
    def reger(peca)
      puts "#{@nome} - #{peca}"
      @orquestra.each do |instrumentista|
        instrumentista.interpretar(peca)
      end
    end
  
    def escalacao
      @orquestra.map do |instrumentista|
        "#{instrumentista.class}: #{instrumentista.nome}"
      end
    end
  end
  
  solista1 = Solista.new("Item A", "Instrumento A")
  acompanhador1 = Acompanhador.new("Item B", "Instrumento B")
  regente1 = Regente.new("Item C")
  
  regente1.convocar(solista1)
  regente1.convocar(acompanhador1)
  
  regente1.reger("Peca 1")
  
  lista_escalacao = regente1.escalacao
  lista_escalacao.each do |item|
    puts item
  end
  
  instrumentista1 = Instrumentista.new("Item D", "Instrumento C")

   #instrumentista1.interpretar("Peca 1")

   #HelloWorld.rb:10:in `interpretar': Metodo nao implementado (NotImplementedError)
	#from HelloWorld.rb:65:in `<top (required)>'
	#from -e:1:in `load'
	#from -e:1:in `<main>'
  
