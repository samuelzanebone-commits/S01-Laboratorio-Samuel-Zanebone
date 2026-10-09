class HeroiOverwatch:

    def __init__(self, codinome: str, funcao: str):
        self.codinome = codinome
        self.funcao = funcao

    def usar_suprema(self):
        print(f"{self.codinome} usou uma suprema generica")


class HeroiTanque(HeroiOverwatch):

    def usar_suprema(self):
        print(f"{self.codinome} usou a suprema de tanque")


class HeroiSuporte(HeroiOverwatch):

    def usar_suprema(self):
        print(f"{self.codinome} usou a suprema de suporte")

    def curar_equipe(self):
        print(f"{self.codinome} curou a equipe")


if __name__ == "__main__":
    heroi1 = HeroiOverwatch("Heroi 1", "Funcao 1")
    heroi2 = HeroiTanque("Heroi 2", "Tanque")
    heroi3 = HeroiSuporte("Heroi 3", "Suporte")

    lista_herois: list[HeroiOverwatch] = [heroi1, heroi2, heroi3]

    for heroi in lista_herois:
        heroi.usar_suprema()
        if isinstance(heroi, HeroiSuporte):
            heroi.curar_equipe()
