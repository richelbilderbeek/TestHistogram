#ifndef TESTHISTOGRAMMENUDIALOG_H
#define TESTHISTOGRAMMENUDIALOG_H

#include <string>
#include <vector>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include <boost/scoped_ptr.hpp>

#include "about.h"
#include "menudialog.h"
#pragma GCC diagnostic pop

namespace ribi {
namespace thst {

struct MenuDialog final : public ::ribi::MenuDialog
{
  MenuDialog();
  ~MenuDialog() noexcept {}
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;

  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;
};

} //~namespace thst
} //~namespace ribi

#endif // TESTHISTOGRAMMENUDIALOG_H
