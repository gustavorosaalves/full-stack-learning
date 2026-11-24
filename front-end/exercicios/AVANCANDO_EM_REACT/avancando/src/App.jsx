import './App.css';
import night from './assets/night.jpg';
import Data from './components/Data';
import ListRender from './components/ListRender';

function App() {

  return (
    <div className='App' style={{paddingBottom: "500px"}}>
      <h1>Avançando em React</h1>
      <img src="/img.jpg" alt="Alguma imagem" />
      <img src={night} alt="Outra imagem" />
      <Data/>
      <ListRender/>
    </div>
  );
};

export default App
