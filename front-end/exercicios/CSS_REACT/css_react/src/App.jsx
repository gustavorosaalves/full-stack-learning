import "./App.css";
import MyComponent from "./components/MyComponent";
import Title from "./components/Title";

function App() {
  const n = 15;
  const redTitle = true;

  return (
    <div className="App">
      <h1>CSS no React</h1>
      <MyComponent />
      <p
        style={{
          color: "blue",
          padding: "25px",
          borderTop: "1px solid dotted blue",
        }}
      >
        Este elemento tem estilos inline
      </p>
      <h2 style={n > 10 ? { color: "purple" } : { color: "magenta" }}>
        CSS dinâmico
      </h2>
      <h2 style={n > 20 ? { color: "purple" } : { color: "magenta" }}>
        CSS dinâmico 2
      </h2>
      <h2 className={redTitle ? "red-title" : "title"}>
        Este título vai ter uma classe
      </h2>
      <Title />
    </div>
  );
}

export default App;
