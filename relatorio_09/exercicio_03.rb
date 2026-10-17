class PhoneWave
    def enviar_dmail(mensagem)
      puts "#{mensagem} - enviada para o passado"
    end
  end
  
  class MembroDoLab
    attr_reader :numero, :nome
  
    def initialize(numero, nome)
      @numero = numero
      @nome = nome
    end
  end
  
  class LaboratorioDeGadgets
    def initialize
      @phonewave = PhoneWave.new
      @membros = []
    end
  
    def admitir(membro)
      @membros << membro
      puts "#{membro.numero} - #{membro.nome}"
    end
  
    def experimento(mensagem)
      @membros.each do |membro|
        puts "#{membro.numero} - #{membro.nome}"
      end
      @phonewave.enviar_dmail(mensagem)
    end
  end
    
  membro1 = MembroDoLab.new("001", "Item A")
  membro2 = MembroDoLab.new("002", "Item B")
  
  lab = LaboratorioDeGadgets.new
  
  lab.admitir(membro1)
  lab.admitir(membro2)
  
  lab.experimento("Dado 1")

  # Composicao: o objeto PhoneWave e instanciado dentro de LaboratorioDeGadgets,
  # nao existindo de forma independente fora do laboratorio.
  # Agregacao: os objetos MembroDoLab sao instanciados fora e passados como referencia para o array @membros,
  # existindo de forma independente.
  
