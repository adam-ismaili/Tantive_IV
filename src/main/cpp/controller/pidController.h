#ifndef PIDCONTROLLER_H
#define PIDCONTROLLER_H

class pidController {
    public:
        pidController(double p, double i, double d);
        ~pidController();
        void reset();

        void setP();
        void setI();
        void setD();
        void setSetpoint();
        void setProccessVariable();
        double update(double proccessVariable);       

    private:
        double pK;
        double iK;
        double dK;
        double cycleTimeK;

        // setpoint - proccessVariable = error
        // Our target goal
        double setpointK;
        // Our input from the sensors
        double proccessVariableM;
        double errorPM;
        double errorIM;
        double errorDM;
        double prevErrorM;
        double outputM;
        


};
#endif