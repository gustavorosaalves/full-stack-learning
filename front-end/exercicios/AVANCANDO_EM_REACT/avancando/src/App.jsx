import './App.css';
import night from './assets/night.jpg'

function App() {

  return (
    <div className='App'>
      <h1>Avançando em React</h1>
      <img src="/img.jpg" alt="Alguma imagem" />
      <img src={night} alt="Outra imagem" />
    </div>
  )
}

export default App
