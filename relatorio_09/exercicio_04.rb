module Depoente
    def depor
      raise NotImplementedError, "Metodo nao implementado"
    end
  end
  
  module Detivel
    def ser_detido
      puts "#{nome} - levado pela Scotland Yard"
    end
  end
  
  class Envolvido
    attr_reader :nome
  
    def initialize(nome)
      @nome = nome
    end
  end
  
  class TestemunhaOcular < Envolvido
    include Depoente
  
    def depor
      puts "#{nome}: relato do fato observado"
    end
  end
  
  class SuspeitoDoCrime < Envolvido
    include Depoente
    include Detivel
  
    def depor
      puts "#{nome}: apresentacao de alibi"
    end
  end
  
  class Investigacao
    def initialize(caso)
      @caso = caso
      @envolvidos = []
    end
  
    def registrar(envolvido)
      @envolvidos << envolvido
    end
  
    def ouvir_todos
      puts "Caso: #{@caso}"
      @envolvidos.each do |envolvido|
        envolvido.depor
      end
    end
  
    def acionar_scotland_yard
      detiveis = @envolvidos.select { |e| e.respond_to?(:ser_detido) }
      detiveis.each(&:ser_detido)
    end
  end
  
  testemunha1 = TestemunhaOcular.new("Pessoa A")
  suspeito1 = SuspeitoDoCrime.new("Pessoa B")
  suspeito2 = SuspeitoDoCrime.new("Pessoa C")
  
  investigacao1 = Investigacao.new("Caso 1")
  
  investigacao1.registrar(testemunha1)
  investigacao1.registrar(suspeito1)
  investigacao1.registrar(suspeito2)
  
  investigacao1.ouvir_todos
  investigacao1.acionar_scotland_yard
  
