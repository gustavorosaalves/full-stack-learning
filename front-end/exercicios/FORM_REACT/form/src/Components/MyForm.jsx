import "./MyForm.css";
import { useState } from "react";

const MyForm = () => {
  const [name, setName] = useState();
  const [email, setEmail] = useState();

  const handlename = (e) => {
    setName(e.target.value);
  };

  console.log(name, email);

  return (
    <div>
      <form>
        <div>
          <label htmlFor="name">Nome:</label>
          <input
            type="text"
            name="name"
            placeholder="Digite seu nome"
            onChange={handlename}
          />
        </div>
        <label>
          <span>E-mail:</span>
          <input
            type="text"
            name="email"
            placeholder="Digite o seu e-mail"
            onChange={(e) => setEmail(e.target.value)}
          />
        </label>
        <input type="submit" value="Enviar" />
      </form>
    </div>
  );
};

export default MyForm;
