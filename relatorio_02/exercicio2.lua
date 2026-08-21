function contarocorrencia(tabela, numero)
    local cont=0

    for i =1, #tabela do
        if tabela[i] == numero then
            cont= cont+1
        end
    end
    return cont
end





print("Digite a quantidade de elementos (N): ")
local n = tonumber(io.read())

local tabela ={}

for i=1, n do
    print("Digite o elemento ".. i .. ":")
    local num = tonumber(io.read())
    table.insert(tabela,num)
end

print("Digite o numero X a ser buscado: ")
local busca = tonumber(io.read())

local resultado = contarocorrencia(tabela, busca)
print("O numero "..busca.. " aparece ".. resultado.. " vez(es) na tabela")
