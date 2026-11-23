import './App.css'
import FirstComponent from './components/FirstComponent'
import MyComponent from './components/MyComponent';
import TemplateExpression from './components/TemplateExpression';

function App() {
  return ( <div className="app">
    {/* comentário JSX */}
    <h1>Fundamentos do React</h1>
    <FirstComponent/>
    <TemplateExpression/>
    <MyComponent/>
  </div>
  );
};

export default App
