#Dúvida 1: Quando uma classe é herdada de outra, a derivada pode usar todos os membros (atributos e métodos) da base. Logo, como a classe Produto já fez o método de inserção do operador <<, todas as suas classes derivadas já terão acesso a esse método.

#Dúvida 2: O método virtual serve para que, mesmo que as classes derivadas redefinam esse método, ele ainda poderá ser usado por um objeto da classe base e quando for declarado virtual puro, a classe vira abstrata, ou seja, uma classe em que objetos não podem ser instanciados.
