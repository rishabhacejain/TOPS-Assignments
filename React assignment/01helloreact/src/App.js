import './App.css';
import Counter from './componenets/Counter';
import FunctionalComponent from './componenets/FunctionalComponent';
import HelloReact from './componenets/HelloReact';
import UserCard from './componenets/UserCard';
import WelcomeMessage from './componenets/WelcomeMessage';
import WelcomeToJSX from './componenets/WelcomeToJSX';

function App() {
  return (
    <>
      {/* Lab exercise 1 Introduction to React.js */}
      {/* <HelloReact />    */}

      {/* Lab exercise 2 JSX (JavaScript XML) */}
      {/* <WelcomeToJSX /> */}

      {/* Lab exercise 3 Task1  Components (Functional & Class Components) */}
      {/* <FunctionalComponent /> */}
      
      {/* Lab exercise 3 Task2 Components (Functional & Class Components) */}
      {/* <WelcomeMessage /> */}

      {/* Lab exercise 4 Task1 Props and State */}
      {/* <UserCard name="Mukul Jain" age={25} location="Nagpur, India" /> */}
      {/* <UserCard name="Rishabh Jain" age={26} location="Surat, India" />  */}
      
      {/* Lab exercise 4 Task2 Props and State */}
      <Counter />
    


    </>

  );
}

export default App;
