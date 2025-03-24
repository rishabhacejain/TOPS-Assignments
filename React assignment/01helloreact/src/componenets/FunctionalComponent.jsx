import React from 'react'

const Greeting = (props) => {
    return <h1 style={{ color: "maroon", textAlign: "center" }}>Hello {props.name}!!</h1>
}

const FunctionalComponent = () => {

    return (
        <>

            <Greeting name="Rishabh" />





            <footer style={{ position: "fixed", bottom: "0px", backgroundColor: "GrayText", width: "100vw", color: "white", padding: "10px" }}>
                <h3>LAB EXERCISE</h3>
                <p>Task 1: Create a functional component <strong>Greeting</strong> that accepts a <strong>name</strong> as a prop and displays "Hello, [name]!".</p>
                <p>Task 2: Create a class component <strong>WelcomeMessage</strong> that displays "Welcome to React!" using the <strong>render()</strong> method.</p>
            </footer>

        </>
    )
}

export default FunctionalComponent