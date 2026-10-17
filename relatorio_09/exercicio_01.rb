class CoquetelAfterlife
    attr_reader :nome
  
    def initialize(nome, preco)
      @nome = nome
      @_preco = preco
    end
  
    def preco
      @_preco
    end
  
    def preco=(valor)
      if valor >= 5 && valor <= 200
        @_preco = valor
      else
        puts "Preço inválido!"
      end
    end
  
    def ficha
      "Item: #{@nome} | Valor: #{@_preco}"
    end
  end
  
  class DrinkDeLenda < CoquetelAfterlife
    attr_reader :lenda
  
    def initialize(nome, preco, lenda)
      super(nome, preco)
      @lenda = lenda
    end
  
    def ficha
      "#{super} | Info: #{@lenda}"
    end
  end
  
  item1 = CoquetelAfterlife.new("Item A", 20)
  item2 = DrinkDeLenda.new("Item B", 50, "Detalhe 1")
  item3 = DrinkDeLenda.new("Item C", 40, "Detalhe 2")
  
  lista = [item1, item2, item3]
  
  lista.each do |elemento|
    puts elemento.ficha
  end
  
  item2.preco = 500
  item2.preco = 80
  
  puts item2.ficha
  
   #item2.nome = "Novo Nome"
    #HelloWorld.rb:54:in `<top (required)>': undefined method `nome=' for an instance of DrinkDeLenda (NoMethodError)
    #item2.nome = "Novo Nome"
    # ^^^^^^^
    #from -e:1:in `load'
    #from -e:1:in `<main>'


  
