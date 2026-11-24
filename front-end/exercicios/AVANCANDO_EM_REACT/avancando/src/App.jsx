import './App.css';
import night from './assets/night.jpg';
import Data from './components/Data';
import ListRender from './components/ListRender';
import ConditionalRender from './components/ConditionalRender';
import ShowUserName from './components/ShowUserName';
import CarDetails from './components/CarDetails';

function App() {

  return (
    <div className='App' style={{paddingBottom: "500px"}}>
      <h1>Avançando em React</h1>
      <img src="/img.jpg" alt="Alguma imagem" />
      <img src={night} alt="Outra imagem" />
      <Data/>
      <ListRender/>
      <ConditionalRender/>
      <ShowUserName name="Pedro" />
      <CarDetails brand = "VW" km = {999} color = "Vermelho"/>
    </div>
  );
};

export default App
