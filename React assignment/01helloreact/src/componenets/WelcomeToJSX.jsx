import React from 'react'

const WelcomeToJSX = () => {

    let username = "Rishabh";
    return (
        <>
            <h1 style={{ color: "blueviolet", textAlign: "center" }}>Welcome To JSX</h1>
            <p style={{ textAlign: "center", fontWeight: "bolder" }}>Hello,{username}....</p>










            <footer style={{ position: "fixed", bottom: "0px", backgroundColor: "#3c3c3c", width: "100vw", color: "white", padding: "10px" }}>
                <h3>LAB EXERCISE</h3>
                <p>Task: Create a React component that renders the following JSX elements:</p>
                
                <ul>
                    <li>A heading with the text "Welcome to JSX"</li>
                    <li>A paragraph explaining JSX with dynamic data (use curly braces to insert
                        variables).</li>
                </ul>
            </footer>

        </>
    )
}

export default WelcomeToJSX