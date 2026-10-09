class Persona:

    def __init__(self, nome: str, arcano: str):
        self.nome = nome
        self.arcano = arcano

    def invocar(self):
        print(f"Persona invocada: {self.nome} | Arcano: {self.arcano}")


class Aliado:

    def __init__(self, nome: str, codinome: str):
        self.nome = nome
        self.codinome = codinome


class Lider:

    def __init__(self, codinome: str):
        self.codinome = codinome
        self.persona = Persona("Arsène", "Louco")
        self._equipe = []

    def recrutar(self, aliado: Aliado):
        self._equipe.append(aliado)

    def infiltrar(self, palacio: str):
        print(f"Infiltrando no Palacio de {palacio}")
        self.persona.invocar()
        equipe_nomes = ", ".join([f"{a.nome} ({a.codinome})" for a in self._equipe])
        print(f"Equipe: {equipe_nomes}")




if __name__ == "__main__":
    aliado1 = Aliado("Pessoa A", "Codinome 1")
    aliado2 = Aliado("Pessoa B", "Codinome 2")

    lider1 = Lider("Lider 1")

    lider1.recrutar(aliado1)
    lider1.recrutar(aliado2)

    lider1.infiltrar("Dono 1")
 # COMPOSIÇÃO: A Persona é criada diretamente dentro do construtor de Lider 

# AGREGAÇÃO: Os objetos Aliado são criados de forma independente fora do Lider
