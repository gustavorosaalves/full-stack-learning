import React from 'react'

const Events = () => {

    const handleClick = () => {
        console.log("Executou");
    };

  return (
    <div>
        <div>
            <button onClick={() => console.log("Testando um evento")}>Clique aqui</button>
        </div>
        <div>
            <button onClick={handleClick}>Clique aqui - com função!</button>
        </div>
    </div>
  );
};

export default Events