class MortoVivo:

    def __init__(self, nome: str, almas: int, estus: int):
        self.nome = nome         
        self._almas = almas      
        self.__estus = estus     


    def get_estus(self):
        return self.__estus

    def set_estus(self, quantidade):
        if 0 <= quantidade <= 10:
            self.__estus = quantidade
        else:
            print("Quantidade de Estus inválida!")

    def mostrar_status(self):
        return f"Morto-vivo {self.nome} | Almas: {self._almas} | Estus: {self.__estus}"


class Clerigo(MortoVivo):

    def __init__(self, nome: str, almas: int, estus: int, milagre: str):
        super().__init__(nome, almas, estus)
        self.milagre = milagre


    def mostrar_status(self):
        return f"{super().mostrar_status()} | Milagre: {self.milagre}"


if __name__ == "__main__":

    pessoa1 = Clerigo("Pessoa A", 2000, 5, "Milagre 1")
    print(pessoa1.mostrar_status())


    pessoa1.set_estus(15)
    pessoa1.set_estus(10)
    print(pessoa1.mostrar_status())

    #imprimindo estus diretamente da o seguinte erro:
    #  File "/box/main.py", line 50
   # print(pessoa1.__estus)
   # IndentationError: unexpected indent
     #print(pessoa1.__estus)
