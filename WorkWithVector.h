#pragma once
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
#include <iterator>


template<typename T>
class WorkWithVector {
public:
   WorkWithVector(const std::vector<T>& vec)
      : m_vec(vec) {}

   
   std::vector<T> Square(const std::function<T(T)>& m_lambda)
   {
      std::vector<T> result;
      result.reserve(m_vec.size());

      std::transform(m_vec.begin(), m_vec.end(), std::back_inserter(result), m_lambda);

      return result;
   }

   template<typename T>
   bool Compare(T pred)
   {
      return std::adjacent_find(m_vec.begin(), m_vec.end(), pred) != m_vec.end();
   }

private:
   
   std::vector<T> m_vec;
   std::function<T(T)> m_lambda{};
};
