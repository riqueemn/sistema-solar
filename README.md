
# 🌌 Sistema Solar

Este projeto implementa uma **animação simples do Sistema Solar em C++**, utilizando **OpenGL/GLUT** para renderização.  
O objetivo é representar de forma visual e didática o movimento orbital dos planetas em torno do Sol.

---

## 🚀 Tecnologias utilizadas

- **C++17**
- **OpenGL** + **GLUT**
- **Makefile** para automatizar a compilação

---

## 📂 Estrutura do projeto

```

sistema-solar/
│── src/                 # Código-fonte principal
│   ├── main.cpp         # Ponto de entrada do programa
│   ├── planeta.cpp      # Implementação da classe Planeta
│   ├── planeta.hpp      # Definição da classe Planeta
│   └── utils.cpp/.hpp   # Funções auxiliares
│
│── lib/                 # Bibliotecas auxiliares (se houver)
│── .vscode/             # Configurações de workspace
│── Makefile             # Script de compilação

````

---

## 🔧 Pré-requisitos

Antes de compilar o projeto, é necessário instalar:

- Compilador **g++**
- **Make**
- Bibliotecas gráficas **OpenGL** e **GLUT**

### Instalação no Ubuntu/Debian
```bash
sudo apt update
sudo apt install build-essential freeglut3-dev
````

### Instalação no Arch Linux

```bash
sudo pacman -S base-devel freeglut
```

### Instalação no Windows

* Baixe o **MinGW** ou use o **MSYS2**.
* Instale as bibliotecas **freeglut** e **OpenGL**.
* Recomenda-se usar o **WSL** se possível.

---

## 🛠️ Como compilar e executar

Na raiz do projeto, execute:

```bash
make
./sistema-solar
```

Caso queira recompilar do zero:

```bash
make clean
make
```

---

## ✨ Funcionalidades

* 🌞 Representação do **Sol** no centro.
* 🪐 Órbitas circulares para os planetas.
* 🎥 Animação em tempo real (simulação contínua).
* ⚙️ Escalas de órbita e tamanhos ajustados para melhor visualização.

---

## 🎮 Controles do programa

* **ESC** → Fecha a aplicação.
* **Setas** → Movimenta a câmera.
* **+ / -** → Zoom in/out.
* **Barra de espaço** → Pausa/continua a simulação.

*(ajuste conforme os controles implementados no código)*

---

## 📌 Próximos passos / melhorias

* Adicionar **luas** aos planetas (ex.: Lua da Terra).
* Incluir **texturas realistas** para os planetas.
* Criar **sistema de iluminação** mais avançado (luz do Sol).
* Implementar **escala de tempo ajustável** (acelerar ou desacelerar órbitas).
* Inserir **interface gráfica com informações** (nomes, velocidades, distâncias).

---

## 📜 Licença

Este projeto está sob a licença **MIT**.
Sinta-se livre para usar, modificar e distribuir.

---

## 👨‍💻 Autor

Projeto desenvolvido por **Henrique Moreira (@riqueemn)**.

```

---


```
