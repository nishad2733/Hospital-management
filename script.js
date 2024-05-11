document.getElementById('appointmentForm').addEventListener('submit', function(event) {
    event.preventDefault();

    const name = document.getElementById('name').value;
    const date = document.getElementById('date').value;
    const time = document.getElementById('time').value;
    const doctor = document.getElementById('doctor').value;

    console.log('Appointment Details:');
    console.log('Name:', name);
    console.log('Date:', date);
    console.log('Time:', time);
    console.log('Doctor:', doctor);

    alert('Appointment booked successfully!');
});