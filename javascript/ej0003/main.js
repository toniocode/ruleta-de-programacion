// Haz un generador de contraseñas aleatorias

function crearGeneradorPassword() {
    const letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    const nums = "0123456789";
    const special = "_-/!@#$%^&*";
    const chars = letters + nums + special;

    const historial = [];

    const generar = (longitud) => {
        let password = "";
        for (let i = 0; i < longitud; i++) {
            const indice = Math.floor(Math.random() * chars.length);
            password += chars[indice];
        }
        guardar(password);
    }

    const guardar = (password) => {
        historial.push(password);
    }

    const mostrarHistorial = () => {
        console.log("Historial de constraseñas: ");
        for (const password of historial) {
            console.log(password);
        }
    }

    return { generar, guardar, mostrarHistorial }
}

const generadorContraseñas = crearGeneradorPassword();
generadorContraseñas.generar(10);
generadorContraseñas.generar(20);
generadorContraseñas.generar(8);
generadorContraseñas.mostrarHistorial();