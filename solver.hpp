#include <iostream>
#include <complex>
using namespace std;
namespace solver 
{
    class RealVariable
    {
        private:

            double m_real;

        public:

        RealVariable(): m_real(0){};
        RealVariable(double real): m_real(real){};

        RealVariable& operator + (double coe);
        RealVariable& operator + (const RealVariable& other);
        friend RealVariable& operator + (double coe, const RealVariable& other);
        
        RealVariable& operator - (double coe);
        RealVariable& operator - (const RealVariable& other);
        friend RealVariable& operator - (double coe, const RealVariable& other);

        RealVariable& operator * (double coe);
        RealVariable& operator * (const RealVariable& other);
        friend RealVariable& operator * (double coe, RealVariable const& other);

        RealVariable& operator / (double coe);
        RealVariable& operator / (const RealVariable& other);
        friend RealVariable& operator / (double coe, const RealVariable& other);

        RealVariable& operator == (double coe);
        RealVariable& operator == (const RealVariable& other);
        friend RealVariable& operator == (double coe, const RealVariable& other);

        RealVariable& operator ^ (int pow);
    };

    class ComplexVariable
    {
        private:

            double m_real;
            double m_img;

        public:

        ComplexVariable(): m_real(0), m_img(0){};
        ComplexVariable(double real,double img): m_real(real),m_img(img){};


        ComplexVariable& operator + (double coe);
        ComplexVariable& operator + (const ComplexVariable& other);
        ComplexVariable& operator + (std::complex<double> cmplx_coe);
        friend ComplexVariable& operator + (std::complex<double> cmplx_coe, const ComplexVariable& other);
        friend ComplexVariable& operator + (double coe, const ComplexVariable& other);
        
        ComplexVariable& operator - (double coe);
        ComplexVariable& operator - (const ComplexVariable& other);
        ComplexVariable& operator - (std::complex<double> cmplx_coe);
        friend ComplexVariable& operator - (std::complex<double> cmplx_coe, const ComplexVariable& other);
        friend ComplexVariable& operator - (double coe, const ComplexVariable& other);

        ComplexVariable& operator * (double coe);
        ComplexVariable& operator * (const ComplexVariable& other);
        ComplexVariable& operator * (std::complex<double> cmplx_coe);
        friend ComplexVariable& operator * (std::complex<double> cmplx_coe, const ComplexVariable& other);
        friend ComplexVariable& operator * (double coe, const ComplexVariable& other);

        ComplexVariable& operator / (double coe);
        ComplexVariable& operator / (const ComplexVariable& other);
        ComplexVariable& operator / (std::complex<double> cmplx_coe);
        friend ComplexVariable& operator / (std::complex<double> cmplx_coe, const ComplexVariable& other);
        friend ComplexVariable& operator / (double coe, const ComplexVariable& other);

        ComplexVariable& operator == (double coe);
        ComplexVariable& operator == (const ComplexVariable& other);
        ComplexVariable& operator == (std::complex<double> cmplx_coe);
        friend ComplexVariable& operator == (std::complex<double> cmplx_coe, const ComplexVariable& other);
        friend ComplexVariable& operator == (double coe, const ComplexVariable& other);

        ComplexVariable& operator ^ (int pow);
    };

    double solve(const RealVariable& rv);
    std::complex<double> solve(const ComplexVariable& cv);
};