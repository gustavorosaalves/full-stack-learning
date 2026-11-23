import MyComponent from "./MyComponent";

const FirstComponent = () => {
    const name = "Gustavo"

    const data = {
        age: 31,
        job: "Programador"
    };

   return (
        <div>
           <h2>Meu primeiro componente!</h2>
           <MyComponent/>
           <h3>Bem vindo {name}</h3>
           <p>Sua idade é {data.age} anos e você é um {data.job}.</p>
        </div>
   );
};

export default FirstComponent