function gerarTabelaPotencias(inicio, fim, base)
    for expoente = inicio, fim do
        local resultado = base ^ expoente
        print(base .. " ^ " .. expoente .. " = " .. resultado)
    end
end



print("Digite o expoente inicial(M): ")
local m = tonumber(io.read())
print("Digite o expoente final(N): ")
local n = tonumber(io.read())
print("Digite a base: ")
local base= tonumber (io.read())


gerarTabelaPotencias(m,n,base)



