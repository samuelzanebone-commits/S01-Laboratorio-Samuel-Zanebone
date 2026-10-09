from abc import ABC, abstractmethod


class IUnidadeDeRede(ABC):

    @abstractmethod
    def executar_invasao(self):
        pass


class Cyberdeck:

    def __init__(self, modelo: str):
        self.modelo = modelo


class OperadorNetrunner(IUnidadeDeRede):

    def __init__(self, nome: str, modelo_cyberdeck: str):
        self.nome = nome
        self.cyberdeck = Cyberdeck(modelo_cyberdeck)

    def executar_invasao(self):
        print(f"{self.nome} usando {self.cyberdeck.modelo} esta quebrando o gelo (ICE) de um servidor.")


class DroneDeVigilancia(IUnidadeDeRede):

    def __init__(self, codigo: str):
        self.codigo = codigo

    def executar_invasao(self):
        print(f"Drone {self.codigo} esta interceptando o sinal da rede.")


class CelulaHacker:

    def __init__(self, nome: str, membros: list[IUnidadeDeRede]):
        self.nome = nome
        self.membros = membros

    def iniciar_ataque(self):
        print(f"Iniciando ataque da celula {self.nome}:")
        for membro in self.membros:
            membro.executar_invasao()


if __name__ == "__main__":
    netrunner1 = OperadorNetrunner("Operador A", "Modelo 1")
    drone1 = DroneDeVigilancia("Codigo 1")

    celula1 = CelulaHacker("Celula A", [netrunner1, drone1])
    celula1.iniciar_ataque()

    # Tentativa de criar objeto deu o seguinte erro:
   # File "/box/main.py", line 56
    #unidade_invalida = IUnidadeDeRede()
    #IndentationError: unexpected indent


     #unidade_invalida = IUnidadeDeRede()
