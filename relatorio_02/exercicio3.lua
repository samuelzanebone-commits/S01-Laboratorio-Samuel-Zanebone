function filtrarMaiores(tabela, limite)
    local novatabela = {}

    for i=1, #tabela do
        if tabela[i]>limite then
            table.insert(novatabela, tabela[i])
        end
    end
    return novatabela
end




print("Digite a quantidade de elementos(N): ")
local n = tonumber(io.read())

local tabela = {}

for i = 1, n do
    print("Digite o elemento ".. i ..": ")
    local num = tonumber(io.read())
    table.insert(tabela, num)
end

print("Digite o valor limite (K): ")
local k=tonumber(io.read())


local resultado =filtrarMaiores(tabela,k)
print("Elementos maiores que ".. k ..":")

for i=1, #resultado do
    print(resultado[i])
end
