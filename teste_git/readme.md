# Teste de commit 

## commit realizado com sucesso! :D

## criando um novo repositório

crie uma nova pasta, abra-a e execute o comando 

git init

para criar um novo repositório.

##obtenha um repositório

crie uma cópia de trabalho em um repositório local executando o comando

git clone /caminho/para/o/repositório

quando usar um servidor remoto, seu comando será

git clone usuário@servidor:/caminho/para/o/repositório

##fluxo de trabalho

seus repositórios locais consistem em três "árvores" mantidas pelo git. a primeira delas é sua Working Directory que contém os arquivos vigentes. a segunda Index que funciona como uma área temporária e finalmente a HEAD que aponta para o último commit (confirmação) que você fez.

##adicionar & confirmar

Você pode propor mudanças (adicioná-las ao Index) usando

git add <arquivo>

ou

git add *

Este é o primeiro passo no fluxo de trabalho básico do git. Para realmente confirmar estas mudanças (isto é, fazer um commit), use
git commit -m "comentários das alterações"
Agora o arquivo é enviado para o HEAD, *mas ainda não para o repositório remoto.*

##enviando alterações

Suas alterações agora estão no HEAD da sua cópia de trabalho local. Para enviar estas alterações ao seu repositório remoto, execute 

git push origin master

Altere master para qualquer ramo (branch) desejado, enviando suas alterações para ele. 

Se você não clonou um repositório existente e quer conectar seu repositório a um servidor remoto, você deve adicioná-lo com

git remote add origin <servidor>

Agora você é capaz de enviar suas alterações para o servidor remoto selecionado.

##referência:
http://rogerdudler.github.io/git-guide/index.pt_BR.html
