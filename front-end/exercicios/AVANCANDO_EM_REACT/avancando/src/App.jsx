import "./App.css";
import night from "./assets/night.jpg";
import Data from "./components/Data";
import ListRender from "./components/ListRender";
import ConditionalRender from "./components/ConditionalRender";
import ShowUserName from "./components/ShowUserName";
import CarDetails from "./components/CarDetails";
import Fragment from "./components/Fragment";
import Container from "./components/Container";
import ExecuteFunction from "./components/ExecuteFunction";

const cars = [
  { id: 1, brand: "Ferrari", color: "Amarelo", km: 0 },
  { id: 2, brand: "Kia", color: "Branco", km: 20000 },
  { id: 3, brand: "Renault", color: "Azul", km: 3200 },
];

function App() {
  function showMessage() {
    console.log("Evento do componente pai");
  }

  return (
    <div className="App" style={{ paddingBottom: "500px" }}>
      <h1>Avançando em React</h1>
      <img src="/img.jpg" alt="Alguma imagem" />
      <img src={night} alt="Outra imagem" />
      <Data />
      <ListRender />
      <ConditionalRender />
      <ShowUserName name="Pedro" />
      <CarDetails brand="VW" km={999} color="Vermelho" />
      <CarDetails brand="Fiat" km={1288} color="Branco" />
      <CarDetails brand="Audi" km={9499} color="Azul" />
      {cars.map((car) => (
        <CarDetails
          key={car.id}
          brand={car.brand}
          color={car.color}
          km={car.km}
        />
      ))}
      <Fragment />
      <Container>
        <p>Alguma coisa</p>
      </Container>
      <ExecuteFunction myfunction={showMessage} />
    </div>
  );
}

export default App;
